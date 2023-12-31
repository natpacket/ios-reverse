//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIImage;

@interface MMLiveWevisionWidgetObj : NSObject <NSCopying>
{
    NSString *_instanceId;
    UIImage *_contentImage;
    struct CGPoint _normalizedAnchorPoint;
    struct CGRect _normalizedFrame;
    CDStruct_94e04e92 _transformDescription;
}

+ (_Bool)isNormalizedAnchorPointValid:(struct CGPoint)arg1;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_94e04e92 transformDescription; // @synthesize transformDescription=_transformDescription;
@property(nonatomic) struct CGPoint normalizedAnchorPoint; // @synthesize normalizedAnchorPoint=_normalizedAnchorPoint;
@property(nonatomic) struct CGRect normalizedFrame; // @synthesize normalizedFrame=_normalizedFrame;
@property(retain, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (id)initWithInstanceId:(id)arg1;

@end

