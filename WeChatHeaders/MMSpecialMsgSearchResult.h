//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaseMessageViewModel, CContact, FTSMsgItem, NSString, UIView;

@interface MMSpecialMsgSearchResult : NSObject
{
    _Bool _m_msgCellViewSizeValid;
    unsigned long long _m_msgSearchResultType;
    FTSMsgItem *_m_msgItem;
    NSString *_m_nsSearchText;
    BaseMessageViewModel *_m_msgViewModel;
    UIView *_m_msgCellView;
    CContact *_contact;
    struct CGSize _m_msgCellViewSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool m_msgCellViewSizeValid; // @synthesize m_msgCellViewSizeValid=_m_msgCellViewSizeValid;
@property(nonatomic) struct CGSize m_msgCellViewSize; // @synthesize m_msgCellViewSize=_m_msgCellViewSize;
@property(retain, nonatomic) UIView *m_msgCellView; // @synthesize m_msgCellView=_m_msgCellView;
@property(retain, nonatomic) BaseMessageViewModel *m_msgViewModel; // @synthesize m_msgViewModel=_m_msgViewModel;
@property(retain, nonatomic) NSString *m_nsSearchText; // @synthesize m_nsSearchText=_m_nsSearchText;
@property(retain, nonatomic) FTSMsgItem *m_msgItem; // @synthesize m_msgItem=_m_msgItem;
@property(nonatomic) unsigned long long m_msgSearchResultType; // @synthesize m_msgSearchResultType=_m_msgSearchResultType;

@end

