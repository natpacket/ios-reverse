//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TextStateRedDotBaseHandler.h"

@class MemoryMappedKV, NSCalendar, NSString, TextStateRedDotProfileIconConfig;

@interface TextStateRedDotProfileIconHandler : TextStateRedDotBaseHandler
{
    NSCalendar *_calendar;
    MemoryMappedKV *_mmkv;
    NSString *_configString;
    TextStateRedDotProfileIconConfig *_config;
}

+ (id)keyFromDuration:(struct _NSRange)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TextStateRedDotProfileIconConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *configString; // @synthesize configString=_configString;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (_Bool)dispose;
- (_Bool)active;
- (void)onConfigChange;
- (unsigned int)configType;
- (struct _NSRange)hitDuration;
- (void)reloadConfigIfNeeded;
- (id)init;

@end

