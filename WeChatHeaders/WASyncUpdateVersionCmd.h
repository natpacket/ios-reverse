//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASyncBaseCmd.h"

@interface WASyncUpdateVersionCmd : WASyncBaseCmd
{
    unsigned int _lastVersion;
    unsigned int _launchFallbackDirectlyMinVersion;
}

@property(nonatomic) unsigned int launchFallbackDirectlyMinVersion; // @synthesize launchFallbackDirectlyMinVersion=_launchFallbackDirectlyMinVersion;
@property(nonatomic) unsigned int lastVersion; // @synthesize lastVersion=_lastVersion;
- (id)description;

@end

