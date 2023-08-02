//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

#import "WCFinderFetchCommentListProtocol-Protocol.h"

@class FinderGetCommentListCtx, NSData, NSString;

@interface WCFinderCommentListCGI : WCFinderBaseCgi <WCFinderFetchCommentListProtocol>
{
    _Bool _fetchObject;
    unsigned long long _objectId;
    unsigned long long _refCommentID;
    unsigned long long _rootCommentID;
    NSData *_lastBuffer;
    CDUnknownBlockType _successBlock;
    NSString *_finderUsername;
    CDUnknownBlockType _failBlock;
    unsigned long long _direction;
    unsigned long long _scene;
    NSString *_nonceID;
    unsigned long long _identityScene;
    unsigned long long _pullScene;
    NSData *_likeListBuffer;
    FinderGetCommentListCtx *_commentCtx;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderGetCommentListCtx *commentCtx; // @synthesize commentCtx=_commentCtx;
@property(retain, nonatomic) NSData *likeListBuffer; // @synthesize likeListBuffer=_likeListBuffer;
@property(nonatomic) unsigned long long pullScene; // @synthesize pullScene=_pullScene;
@property(nonatomic) unsigned long long identityScene; // @synthesize identityScene=_identityScene;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool fetchObject; // @synthesize fetchObject=_fetchObject;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long rootCommentID; // @synthesize rootCommentID=_rootCommentID;
@property(nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)customSuccessfulRetCodeArray;
- (_Bool)needADDeviceInfo;
- (void)createRequest;
- (id)requestWithObjectid:(unsigned long long)arg1 nonceID:(id)arg2 scene:(unsigned long long)arg3 pullScene:(unsigned long long)arg4 identityScene:(unsigned long long)arg5 lastBuffer:(id)arg6 rootCommentID:(unsigned long long)arg7 direction:(unsigned long long)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (id)requestWithObjectid:(unsigned long long)arg1 nonceID:(id)arg2 scene:(unsigned long long)arg3 pullScene:(unsigned long long)arg4 identityScene:(unsigned long long)arg5 lastBuffer:(id)arg6 refCommentID:(unsigned long long)arg7 direction:(unsigned long long)arg8 commentRequestCtx:(id)arg9 successBlock:(CDUnknownBlockType)arg10 failureBlock:(CDUnknownBlockType)arg11;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

