//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface EditImageLogicController : NSObject
{
    NSMutableDictionary *__editedImageDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *_editedImageDic; // @synthesize _editedImageDic=__editedImageDic;
- (void)dealloc;
- (id)getEditedString:(id)arg1;
- (_Bool)clearSavedFiles;
- (void)modifyEditedImageWithAssetUrl:(id)arg1 withImage:(id)arg2 withDrawLayer:(id)arg3 withEdited:(_Bool)arg4 withEditedWidgetStateList:(id)arg5;
- (id)getEditOriginalImageDataWithUrl:(id)arg1;
- (id)getEditImageAttrWithUrl:(id)arg1;
- (id)init;

@end
