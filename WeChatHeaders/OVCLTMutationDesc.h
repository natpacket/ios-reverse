//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, OVCLTLayerSpecifier, OVCLTMutationKind;

@interface OVCLTMutationDesc : NSObject
{
    OVCLTMutationKind *_mutationKind;
    OVCLTLayerSpecifier *_ltLayerSpecifier;
    NSDictionary *_mutationOptions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *mutationOptions; // @synthesize mutationOptions=_mutationOptions;
@property(readonly, nonatomic) OVCLTLayerSpecifier *ltLayerSpecifier; // @synthesize ltLayerSpecifier=_ltLayerSpecifier;
@property(readonly, nonatomic) OVCLTMutationKind *mutationKind; // @synthesize mutationKind=_mutationKind;
- (id)initWithMutationKind:(id)arg1 ltLayerSpecifier:(id)arg2 mutationOptions:(id)arg3;

@end
