//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUPnPAction.h"

@interface KSUPnPAction_RenderingControl_GetVolume : KSUPnPAction
{
    long long _volume;
}

@property(readonly, nonatomic) long long volume; // @synthesize volume=_volume;
- (_Bool)parseActionBodyFromXMLData:(id)arg1;
- (id)generateXMLForActionArguments;
- (id)actionName;

@end
