//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTSIntelligentMsgItem, FTSMsgItem, NSString;

@interface MsgSearchResult : NSObject
{
    unsigned int m_msgSearchResultType;
    NSString *m_nsSearchText;
    FTSMsgItem *m_msgItem;
    FTSIntelligentMsgItem *m_intelligentMsgItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSIntelligentMsgItem *m_intelligentMsgItem; // @synthesize m_intelligentMsgItem;
@property(retain, nonatomic) FTSMsgItem *m_msgItem; // @synthesize m_msgItem;
@property(retain, nonatomic) NSString *m_nsSearchText; // @synthesize m_nsSearchText;
@property(nonatomic) unsigned int m_msgSearchResultType; // @synthesize m_msgSearchResultType;

@end

