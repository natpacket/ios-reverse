//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSError, NSMutableArray, NSMutableString, NSString;

@interface WAMediaCastingXMLReader : NSObject <NSXMLParserDelegate>
{
    NSMutableArray *_dictionaryStack;
    NSMutableString *_textInProgress;
    NSError *_errorPointer;
}

+ (id)dictionaryForXMLString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dictionaryForXMLData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dictionaryForXMLString:(id)arg1 error:(id *)arg2;
+ (id)dictionaryForXMLData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *errorPointer; // @synthesize errorPointer=_errorPointer;
@property(retain, nonatomic) NSMutableString *textInProgress; // @synthesize textInProgress=_textInProgress;
@property(retain, nonatomic) NSMutableArray *dictionaryStack; // @synthesize dictionaryStack=_dictionaryStack;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)objectWithData:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

