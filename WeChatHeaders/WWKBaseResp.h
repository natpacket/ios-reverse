//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKBaseObject.h"

@class NSString;

@interface WWKBaseResp : WWKBaseObject
{
    int _errCode;
    NSString *_errStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errStr; // @synthesize errStr=_errStr;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
- (_Bool)deserializeWithDictionary:(id)arg1;
- (id)serializedDict;

@end
