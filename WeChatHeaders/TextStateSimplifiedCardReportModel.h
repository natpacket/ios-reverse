//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStateSimplifiedCardReportModel : NSObject
{
    NSString *_textStateId;
    long long _scene;
    long long _action;
    unsigned long long _actionTimestamp;
    long long _exitType;
    unsigned long long _duration;
    NSString *_sceneSessionId;
    NSString *_cardListId;
    unsigned long long _requestId;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *cardListId; // @synthesize cardListId=_cardListId;
@property(retain, nonatomic) NSString *sceneSessionId; // @synthesize sceneSessionId=_sceneSessionId;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long exitType; // @synthesize exitType=_exitType;
@property(nonatomic) unsigned long long actionTimestamp; // @synthesize actionTimestamp=_actionTimestamp;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;

@end

