//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class NSString;
@protocol StoreEmotionGetDesignerSimpleInfoCgiDelegate;

@interface StoreEmotionGetDesignerSimpleInfoCgi : StoreEmotionBaseCgi
{
    NSString *m_designerId;
    id <StoreEmotionGetDesignerSimpleInfoCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StoreEmotionGetDesignerSimpleInfoCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequestWithDesignerId:(id)arg1;
- (id)init;

@end

