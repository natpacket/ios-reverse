//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol MidasIAPPayDelegate;

@interface MidasLifecycleInfo : NSObject
{
    NSString *_environment;
    NSString *_locale;
    NSDictionary *_dictExtra;
    id <MidasIAPPayDelegate> _reprovideDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MidasIAPPayDelegate> reprovideDelegate; // @synthesize reprovideDelegate=_reprovideDelegate;
@property(retain, nonatomic) NSDictionary *dictExtra; // @synthesize dictExtra=_dictExtra;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
- (_Bool)isKeyAllowed:(id)arg1;

@end

