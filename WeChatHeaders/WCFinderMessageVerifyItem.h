//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface WCFinderMessageVerifyItem : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_desc;
    NSString *_relativePath;
    NSString *_sceneNote;
    NSString *_scene;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(copy, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)getTextFrom:(struct XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

