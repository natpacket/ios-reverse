//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderBuildHelper : NSObject
{
}

+ (id)calculateSubStringCount:(id)arg1 str:(id)arg2;
+ (void)shakeAnimationForView:(id)arg1;
+ (id)splitWXEmotionFromContent:(id)arg1;
+ (double)getTargetTextRichTextViewWidthByContent:(id)arg1;
+ (double)getRichTextViewWidthByFont:(id)arg1 lineNumber:(long long)arg2 content:(id)arg3;
+ (id)buildFinderIconRedDotSize:(struct CGSize)arg1 lightUrl:(id)arg2 darkUrl:(id)arg3;
+ (id)buildFinderAvatorRedDotSize:(struct CGSize)arg1 imageUrl:(id)arg2 isSquare:(_Bool)arg3;
+ (id)buildFinderAvatorRedDotSize:(struct CGSize)arg1 imageUrl:(id)arg2;
+ (id)createCellWithImage:(id)arg1 iconUrl:(id)arg2 title:(id)arg3 subTitle:(id)arg4 themeColor:(id)arg5 showRightArrow:(_Bool)arg6 backgroundColor:(id)arg7 width:(double)arg8;
+ (id)createSwitchCellWithTitle:(id)arg1 subTitle:(id)arg2 rightIcon:(id)arg3 backgroundColor:(id)arg4 width:(double)arg5 themeColor:(id)arg6 target:(id)arg7 switchOn:(_Bool)arg8 switchTag:(long long)arg9 tipsClickAction:(SEL)arg10 switchChangeAction:(SEL)arg11;
+ (id)buildRichTextViewWithFrame:(struct CGRect)arg1 fWidth:(double)arg2 parserType:(unsigned long long)arg3 lineNumber:(long long)arg4 font:(id)arg5 textColor:(id)arg6 textAlignment:(long long)arg7 inlineVerticalAlign:(long long)arg8 defaultText:(id)arg9;
+ (id)buildImageButtonWithFrame:(struct CGRect)arg1 normalImage:(id)arg2 selectImage:(id)arg3 expandHitHeight:(double)arg4 expandHitWidth:(double)arg5 cornerRadius:(double)arg6 target:(id)arg7 action:(SEL)arg8 voiceOverTips:(id)arg9;
+ (id)buildLabelWithFont:(id)arg1 textColor:(id)arg2 textHeight:(double)arg3 defaultText:(id)arg4 maxWidth:(double)arg5 textAlignment:(long long)arg6;

@end

