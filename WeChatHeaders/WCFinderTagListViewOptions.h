//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderTagListViewOptions : NSObject
{
    _Bool _supportExpand;
    _Bool _displayBubble;
    long long _limitCount;
    long long _maxCharecterCount;
    double _titleFontSize;
    double _expandButtonLeftLeastPadding;
    double _expandButtonRightPadding;
    long long _closeStyle;
    struct CGSize _itemPadding;
    struct CGSize _labelStretchSize;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) _Bool displayBubble; // @synthesize displayBubble=_displayBubble;
@property(nonatomic) long long closeStyle; // @synthesize closeStyle=_closeStyle;
@property(nonatomic) double expandButtonRightPadding; // @synthesize expandButtonRightPadding=_expandButtonRightPadding;
@property(nonatomic) double expandButtonLeftLeastPadding; // @synthesize expandButtonLeftLeastPadding=_expandButtonLeftLeastPadding;
@property(nonatomic) _Bool supportExpand; // @synthesize supportExpand=_supportExpand;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(nonatomic) struct CGSize labelStretchSize; // @synthesize labelStretchSize=_labelStretchSize;
@property(nonatomic) struct CGSize itemPadding; // @synthesize itemPadding=_itemPadding;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) long long maxCharecterCount; // @synthesize maxCharecterCount=_maxCharecterCount;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
- (id)init;

@end
