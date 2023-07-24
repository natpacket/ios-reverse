#!/bin/bash 

# ${SRCROOT} 它是工程文件所在的目录
TEMP_PATH="${SRCROOT}/Temp"
# 资源文件夹，我们提前在工程目录下新建一个APP文件夹，里面放ipa包
ASSETS_PATH="${SRCROOT}/APP"
#目标ipa包路径
TARGET_IPA_PATH="${ASSETS_PATH}/*.ipa"
# 清空Temp文件夹
rm -fr "${SRCROOT}/Temp"
mkdir -p "${SRCROOT}/Temp"

#---------------------------------------------
# 1. 解压ipa到Temp目录下
unzip -oq "$TARGET_IPA_PATH" -d "$TEMP_PATH"

# 拿到解压的临时app路径
TEMP_APP_PATH=$(set -- "$TEMP_PATH/Payload/"*.app;echo "$1")
echo "临时app路径：$TEMP_APP_PATH"

#---------------------------------------------
# 2.将解压出的app拷贝进入工程下
# BUILD_PRODUCTS_DIR 工程生成的app包的路径
# TARGET_NAME target名称
TARGET_APP_PATH="$BUILT_PRODUCTS_DIR/$TARGET_NAME.app"
echo "app路径: $TARGET_APP_PATH"

rm -fr "$TARGET_APP_PATH"
mkdir -p "$TARGET_APP_PATH"
cp -rf "$TEMP_APP_PATH/" "$TARGET_APP_PATH"


#---------------------------------------------
# 3. 删除extension和WeChatAPP. 个人证书没法签名Extention 这里可能需要自己根据app进行调整
rm -fr "$TARGET_APP_PATH/PlugIns"
rm -fr "$TARGET_APP_PATH/Watch"


#---------------------------------------------
# 4. 更新info.list文件 CFBundleIdentifier  这里可能需要自己根据app进行调整
# 设置:" Set : Key Value" "目标文件路径"
/usr/libexec/PlistBuddy -c "Set :CFBundleIdentifier $PRODUCT_BUNDLE_IDENTIFIER" "$TARGET_APP_PATH/Info.plist"
/usr/libexec/PlistBuddy -c "Set :WKCompanionAppBundleIdentifier $PRODUCT_BUNDLE_IDENTIFIER" "$TARGET_APP_PATH/com.apple.WatchPlaceholder/WeChatWatchNative.app/Info.plist"
/usr/libexec/PlistBuddy -c "Set :CFBundleIdentifier $PRODUCT_BUNDLE_IDENTIFIER.watchapp" "$TARGET_APP_PATH/com.apple.WatchPlaceholder/WeChatWatchNative.app/Info.plist"
/usr/libexec/PlistBuddy -c "Set :CFBundleIdentifier $PRODUCT_BUNDLE_IDENTIFIER.watchapp.watchkitextension" "$TARGET_APP_PATH/com.apple.WatchPlaceholder/WeChatWatchNative.app/PlugIns/WeChatWatchNativeExtension.appex/Info.plist"
#---------------------------------------------
# 5. 给MachO文件上执行全县
APP_BINARY=`plutil -convert xml1 -o - $TARGET_APP_PATH/Info.plist|grep -A1 Exec | tail -n1|cut -f2 -d \> | cut -f1 -d \<`
chmod +x "$TARGET_APP_PATH/$APP_BINARY"


#---------------------------------------------
# 6. 冲签名第三方FrameWorks
TARGET_APP_FRAMEWORKS_PATH="$TARGET_APP_PATH/Frameworks"
if [ -d "$TARGET_APP_FRAMEWORKS_PATH" ];
then
for FRAMEWORK in "$TARGET_APP_FRAMEWORKS_PATH/"*
do
# 签名
/usr/bin/codesign --force --sign "$EXPANDED_CODE_SIGN_IDENTITY" "$FRAMEWORK"
done
fi




