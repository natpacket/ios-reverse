//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTChainCall.h"

@interface WCTDelete : WCTChainCall
{
    struct StatementDelete _statement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)execute;
- (id)offset:(const void *)arg1;
- (id)limit:(const void *)arg1;
- (id)orders:(const void *)arg1;
- (id)where:(const void *)arg1;
- (id)fromTable:(id)arg1;
- (void *)statement;

@end

