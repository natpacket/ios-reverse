//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class NSData;
@protocol StoreEmoticonGetDesginerIPListCgiDelegate;

@interface StoreEmoticonGetDesginerIPListCgi : StoreEmotionBaseCgi
{
    unsigned int _designerUin;
    id <StoreEmoticonGetDesginerIPListCgiDelegate> _delegate;
    NSData *_context;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
@property(retain, nonatomic) NSData *context; // @synthesize context=_context;
@property(nonatomic) __weak id <StoreEmoticonGetDesginerIPListCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequest:(_Bool)arg1;
- (id)initWithContext:(id)arg1 andDesignerUin:(unsigned int)arg2;
- (id)init;

@end

