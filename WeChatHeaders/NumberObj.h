//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NumberObj : NSObject
{
    int m_value;
    int _type;
    NSString *_valueStr;
}

+ (id)numberFromValueStr:(id)arg1 preferType:(int)arg2;
+ (id)numberFromValueStr:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *valueStr; // @synthesize valueStr=_valueStr;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (_Bool)increase;
- (id)initWithValue:(int)arg1;

@end
