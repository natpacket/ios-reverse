//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MagicSclFrameSetView, NSString, _TtC6WeChat20MagicSclFrameSetRoot;

@interface _TtC6WeChat16MagicSclFrameSet : NSObject
{
    // Error parsing type: , name: name
    // Error parsing type: , name: frameSetId
    // Error parsing type: , name: viewId
    // Error parsing type: , name: width
    // Error parsing type: , name: height
    // Error parsing type: , name: attached
    // Error parsing type: , name: bound
    // Error parsing type: , name: inited
    // Error parsing type: , name: frameSetRoot
    // Error parsing type: , name: containerView
    // Error parsing type: , name: layoutCallback
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)resize;
- (void)redraw;
- (void)detach;
- (void)attach;
- (void)unbind;
- (void)bind;
- (void)updateContainerWithView:(id)arg1;
- (void)initFrameSet;
@property(nonatomic) __weak MagicSclFrameSetView *containerView; // @synthesize containerView;
@property(nonatomic) __weak _TtC6WeChat20MagicSclFrameSetRoot *frameSetRoot; // @synthesize frameSetRoot;
@property(nonatomic) _Bool inited; // @synthesize inited;
@property(nonatomic) _Bool bound; // @synthesize bound;
@property(nonatomic) long long height; // @synthesize height;
@property(nonatomic) long long width; // @synthesize width;
@property(nonatomic) long long viewId; // @synthesize viewId;
@property(nonatomic, readonly) NSString *frameSetId;
@property(nonatomic, readonly) NSString *name;

@end

