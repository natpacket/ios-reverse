//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTSMsgItem.h"

@class NSString;

@interface FTSIntelligentMsgItem : FTSMsgItem
{
    NSString *_ocrText;
    NSString *_faceAlbumLabels;
    NSString *_classificationLabels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *classificationLabels; // @synthesize classificationLabels=_classificationLabels;
@property(retain, nonatomic) NSString *faceAlbumLabels; // @synthesize faceAlbumLabels=_faceAlbumLabels;
@property(retain, nonatomic) NSString *ocrText; // @synthesize ocrText=_ocrText;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (long long)compareMsgItemAscending:(id)arg1;

@end

