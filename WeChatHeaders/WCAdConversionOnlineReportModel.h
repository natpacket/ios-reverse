//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCAdConversionOnlineReportModel : NSObject
{
    int _ct;
    int _os;
    int _sdkSt;
    NSString *_pkg;
    NSString *_av;
    NSMutableArray *_events;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSString *av; // @synthesize av=_av;
@property(nonatomic) int sdkSt; // @synthesize sdkSt=_sdkSt;
@property(nonatomic) int os; // @synthesize os=_os;
@property(nonatomic) int ct; // @synthesize ct=_ct;
@property(retain, nonatomic) NSString *pkg; // @synthesize pkg=_pkg;
- (id)init;

@end

