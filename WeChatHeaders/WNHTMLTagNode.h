//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableString, NSString, WNContentStorage;

@interface WNHTMLTagNode : NSObject
{
    WNContentStorage *m_contentStorage;
    NSString *_tagName;
    NSMutableString *_textContent;
    NSMutableArray *_attributes;
    NSDictionary *_tagAttributes;
    WNHTMLTagNode *_parentNode;
    NSMutableArray *_childNodes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *childNodes; // @synthesize childNodes=_childNodes;
@property(nonatomic) __weak WNHTMLTagNode *parentNode; // @synthesize parentNode=_parentNode;
@property(retain, nonatomic) NSDictionary *tagAttributes; // @synthesize tagAttributes=_tagAttributes;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSMutableString *textContent; // @synthesize textContent=_textContent;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (id)contentStorage;
- (void)addAttribute:(id)arg1;
- (void)addChildNode:(id)arg1;
- (void)dealloc;
- (id)initWithTagName:(id)arg1 parentNode:(id)arg2;

@end

