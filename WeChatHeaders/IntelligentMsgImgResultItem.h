//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface IntelligentMsgImgResultItem : MMObject
{
    unsigned int _m_searchType;
    NSString *_m_labelName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_searchType; // @synthesize m_searchType=_m_searchType;
@property(retain, nonatomic) NSString *m_labelName; // @synthesize m_labelName=_m_labelName;
- (id)initWithLabelName:(id)arg1 searchType:(unsigned int)arg2;

@end

