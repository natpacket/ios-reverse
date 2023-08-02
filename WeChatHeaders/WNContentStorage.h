//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RTEContentStorage.h"

@interface WNContentStorage : RTEContentStorage
{
    _Bool _isSmallImageMode;
    _Bool _enableNewOrderList;
}

+ (id)contentDefaultParagraphStyle;
+ (id)contentCustomTextAttributeWithFont:(id)arg1;
+ (id)contentDefaultTextAttribute;
@property(nonatomic) _Bool enableNewOrderList; // @synthesize enableNewOrderList=_enableNewOrderList;
@property(nonatomic) _Bool isSmallImageMode; // @synthesize isSmallImageMode=_isSmallImageMode;
- (void)adjustTextAlignmentFor:(id)arg1;
- (void)removeBackgroundColorForNewLine:(id)arg1;
- (_Bool)needResetParagraphSpacingWithList:(id)arg1 node:(id)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1;
- (id)typingAttributesAtIndex:(unsigned long long)arg1;
- (id)buildAttributedStringForRange:(struct _NSRange)arg1;
- (_Bool)isAttribute:(id)arg1 extendableAtIndex:(unsigned long long)arg2 isPreNode:(_Bool)arg3;
- (void)deleteCententAtRange:(struct _NSRange)arg1;
- (_Bool)updateListAttributeSinceIndex:(unsigned long long)arg1;
- (_Bool)needSeperateAtLocation:(unsigned long long)arg1;
- (_Bool)canSetSmallImageOnRange:(struct _NSRange)arg1;
- (_Bool)canSetLargeImageOnRange:(struct _NSRange)arg1;
- (_Bool)canUnHighlightOnRange:(struct _NSRange)arg1;
- (_Bool)canHighlightOnRange:(struct _NSRange)arg1;
- (_Bool)canUnBoldOnRange:(struct _NSRange)arg1;
- (_Bool)canBoldOnRange:(struct _NSRange)arg1;
- (_Bool)isImageOnRange:(struct _NSRange)arg1;
- (_Bool)containOrdinaryCharacterInRange:(struct _NSRange)arg1;
- (_Bool)containHeaderAttachmentInRange:(struct _NSRange)arg1;
- (_Bool)containMediaAttachmentInRange:(struct _NSRange)arg1;
- (_Bool)containAttachmentInRange:(struct _NSRange)arg1;
- (_Bool)containImageOrVideoAttributeInRange:(struct _NSRange)arg1;
- (_Bool)containRecordingAttributeInRange:(struct _NSRange)arg1;
- (_Bool)containListPrefixInRange:(struct _NSRange)arg1;
- (_Bool)containListInRange:(struct _NSRange)arg1;
- (unsigned int)mediaAttachmentCount;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
