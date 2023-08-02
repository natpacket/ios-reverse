//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderKeywordComponent : NSObject
{
    NSString *_componentId;
    NSMutableDictionary *_keywordMap;
}

+ (id)findKeywordInRect:(struct CGRect)arg1 withKeywordMap:(const void *)arg2;
+ (multimap_8acdc1b4)keywordHiglightFrameInStyleArray:(id)arg1;
+ (_Bool)isFinderKeywordJumpUrl:(id)arg1;
+ (unsigned long long)contextCommentSceneFromView:(id)arg1;
+ (void)reportClickCommentJumpInfo:(id)arg1 action:(long long)arg2 fromVC:(id)arg3 dataItem:(id)arg4 indexPath:(id)arg5;
+ (void)reportExposeCommentKeyword:(struct WCFinderKeywordAction)arg1 fromVC:(id)arg2 dataItem:(id)arg3 indexPath:(id)arg4;
+ (void)reportClickCommentKeyword:(struct WCFinderKeywordAction)arg1 fromVC:(id)arg2 dataItem:(id)arg3 indexPath:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *keywordMap; // @synthesize keywordMap=_keywordMap;
@property(retain, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
- (id)ensureJumpInfoSearchWord:(id)arg1 link:(id)arg2;
- (id)_displayIconForKeywordId:(id)arg1;
- (id)_linkForKeywordId:(id)arg1 text:(id)arg2;
- (void)parseNode:(struct XmlReaderNode_t *)arg1 readContentTo:(id)arg2;
- (id)paseContentFromNode:(struct XmlReaderNode_t *)arg1;
- (id)parseXMLForString:(id)arg1;
- (struct WCFinderKeywordAction)actionForKeywordUrl:(id)arg1;
- (id)initWithKeywordArray:(id)arg1 componentId:(id)arg2;
- (id)init;

@end

