//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, _TtC6WeChat17WCDBIntegerNumber;

@interface _TtC6WeChat24PredownloadHistoryRecord : NSObject
{
    // Error parsing type: , name: date
    // Error parsing type: , name: size
    // Error parsing type: , name: serverPriority
    // Error parsing type: , name: clientPriority
    // Error parsing type: , name: downloadState
    // Error parsing type: , name: downloadRetries
    // Error parsing type: , name: sizeThatStartPredownload
    // Error parsing type: , name: skipQuota
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic) _Bool skipQuota; // @synthesize skipQuota;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *sizeThatStartPredownload;
@property(nonatomic) long long downloadRetries; // @synthesize downloadRetries;
@property(nonatomic) long long downloadState; // @synthesize downloadState;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *clientPriority;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *serverPriority;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *size;
@property(nonatomic, copy) NSDate *date;

@end

