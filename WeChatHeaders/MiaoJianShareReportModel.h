//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTimeline3rdShareBaseReporter.h"

@class NSString;

@interface MiaoJianShareReportModel : WCTimeline3rdShareBaseReporter
{
    unsigned int _type;
    unsigned int _outcome;
    unsigned int _templateType;
    NSString *_publicID;
    NSString *_sessionID;
    NSString *_localID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localID; // @synthesize localID=_localID;
@property(nonatomic) unsigned int templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int outcome; // @synthesize outcome=_outcome;
@property(retain, nonatomic) NSString *publicID; // @synthesize publicID=_publicID;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (unsigned int)uintOfStringValKey:(id)arg1 inDict:(id)arg2;
- (_Bool)containKey:(id)arg1 inDict:(id)arg2;
- (_Bool)isSupport:(id)arg1;
- (void)updateOutcome:(unsigned int)arg1 serverItem:(id)arg2 localItem:(id)arg3;
- (void)bindDataItem:(id)arg1;

@end
