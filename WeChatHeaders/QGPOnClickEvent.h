//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QGPEvent.h"

@class NSArray, NSString;

@interface QGPOnClickEvent : QGPEvent
{
    NSArray *_clickedPosition;
    NSString *_identifier;
    NSString *_name;
}

+ (id)instanceWithClickedPosition:(id)arg1 identifier:(id)arg2 name:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSArray *clickedPosition; // @synthesize clickedPosition=_clickedPosition;

@end
