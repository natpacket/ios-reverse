//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class FinderLiveQRCodePosterStyle, NSString;

@interface MMFinderLiveNoticePosterStyleRecord : NSObject <WCTTableCoding>
{
    unsigned int _styleVersion;
    unsigned long long _elementIndex;
    FinderLiveQRCodePosterStyle *_style;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_styleVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)styleVersion;
+ (id)swift_style;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)style;
+ (id)swift_elementIndex;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)elementIndex;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int styleVersion; // @synthesize styleVersion=_styleVersion;
@property(retain, nonatomic) FinderLiveQRCodePosterStyle *style; // @synthesize style=_style;
@property(nonatomic) unsigned long long elementIndex; // @synthesize elementIndex=_elementIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

