//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TextStateIcon;

@interface TextStatePublishOfficialIconItem : NSObject
{
    TextStateIcon *_icon;
    unsigned long long _descriptionLineNumber;
    double _itemHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) unsigned long long descriptionLineNumber; // @synthesize descriptionLineNumber=_descriptionLineNumber;
@property(retain, nonatomic) TextStateIcon *icon; // @synthesize icon=_icon;
- (void)updateItemHeight;
- (id)initWithIcon:(id)arg1;

@end

