//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FTSTopHitDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface FTSKFContactLocalSearchMgr : NSObject <FTSTopHitDelegate>
{
    _Bool _bSceneForFTS;
    NSMutableArray *m_arrKFContact;
    NSMutableArray *m_arrMainResult;
    NSMutableDictionary *m_dicMainSearchTip;
    NSMutableArray *m_arrDetailResult;
    NSMutableDictionary *m_dicDetailSearchTip;
    NSString *_newestQueryText;
    NSString *_newestQueryTextForDetail;
    NSString *_lastQueryText;
    NSString *_lastQueryTextForDetail;
    NSDictionary *_dicKFContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dicKFContact; // @synthesize dicKFContact=_dicKFContact;
@property(retain, nonatomic) NSString *lastQueryTextForDetail; // @synthesize lastQueryTextForDetail=_lastQueryTextForDetail;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
@property(retain, nonatomic) NSString *newestQueryTextForDetail; // @synthesize newestQueryTextForDetail=_newestQueryTextForDetail;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(nonatomic) _Bool bSceneForFTS; // @synthesize bSceneForFTS=_bSceneForFTS;
@property(retain, nonatomic) NSMutableDictionary *m_dicDetailSearchTip; // @synthesize m_dicDetailSearchTip;
@property(retain, nonatomic) NSMutableArray *m_arrDetailResult; // @synthesize m_arrDetailResult;
@property(retain, nonatomic) NSMutableDictionary *m_dicMainSearchTip; // @synthesize m_dicMainSearchTip;
@property(retain, nonatomic) NSMutableArray *m_arrMainResult; // @synthesize m_arrMainResult;
@property(retain, nonatomic) NSMutableArray *m_arrKFContact; // @synthesize m_arrKFContact;
- (id)tophit_getKFContactDictionary;
- (_Bool)isToHitKFContactReady;
- (void)fillDictioanry;
- (void)doSearchForDetail:(id)arg1;
- (void)filterTopHit:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)refreshSource:(id)arg1;
- (void)initSource;
- (id)getDetailMatchTipForKey:(id)arg1;
- (id)getMatchTipForKey:(id)arg1;
- (_Bool)hasSearchDoneForDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForHomePage:(id)arg1;
- (_Bool)hasSearchResultForHomePage:(id)arg1;
- (id)getDetailSearchMatchTip;
- (id)getArrDetailSearchResult;
- (id)getMainSearchMatchTip;
- (id)getArrMainSearchResult;
- (void)asyncSearchForDetail:(id)arg1;
- (void)asyncSearch:(id)arg1;
- (void)cancelSearchForDetail;
- (void)cancelSearch;
- (void)doInitWorker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
