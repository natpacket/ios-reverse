//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ShareMsgObj : NSObject
{
    unsigned int _createtime;
    long long _svrid;
    long long _newsvrid;
}

+ (id)genShareMsgObjWithNode:(struct XmlReaderNode_t *)arg1;
+ (id)genShareMsgObjWithMsgWrap:(id)arg1;
@property(nonatomic) long long newsvrid; // @synthesize newsvrid=_newsvrid;
@property(nonatomic) long long svrid; // @synthesize svrid=_svrid;
@property(nonatomic) unsigned int createtime; // @synthesize createtime=_createtime;
- (id)genSourceContent;

@end
