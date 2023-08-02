//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface AudioRecorderUserData : NSObject <NSCopying>
{
    _Bool _receiveEndFlag;
    _Bool _isSetInputPortWithBuiltInMic;
    _Bool _isInputPortReseted;
    _Bool _bCancelUpload;
    unsigned int _createtime;
    unsigned int _audioid;
    unsigned int _duration;
    unsigned int _inputId;
    unsigned int _errorCode;
    unsigned int _receiveDataLength;
    NSString *_fromusr;
    NSString *_tousr;
    NSString *_chatname;
    NSString *_msgSource;
    long long _voiceFormat;
    unsigned long long _touchBeginTimestamp;
    unsigned long long _requestRecordPermissionCallbackTimestamp;
    unsigned long long _recordStartTimestamp;
    unsigned long long _prepareQueueTimestamp;
    unsigned long long _audioQueueNewTimestamp;
    unsigned long long _audioQueueInitTimestamp;
    unsigned long long _audioSessionActiveTimestamp;
    unsigned long long _inputDeviceSelectedTimestamp;
    unsigned long long _recordBeginTimestamp;
    unsigned long long _audioQueueStartedTimestamp;
    unsigned long long _receiveFirstPCMTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bCancelUpload; // @synthesize bCancelUpload=_bCancelUpload;
@property unsigned long long receiveFirstPCMTimestamp; // @synthesize receiveFirstPCMTimestamp=_receiveFirstPCMTimestamp;
@property unsigned long long audioQueueStartedTimestamp; // @synthesize audioQueueStartedTimestamp=_audioQueueStartedTimestamp;
@property unsigned long long recordBeginTimestamp; // @synthesize recordBeginTimestamp=_recordBeginTimestamp;
@property unsigned long long inputDeviceSelectedTimestamp; // @synthesize inputDeviceSelectedTimestamp=_inputDeviceSelectedTimestamp;
@property unsigned long long audioSessionActiveTimestamp; // @synthesize audioSessionActiveTimestamp=_audioSessionActiveTimestamp;
@property unsigned long long audioQueueInitTimestamp; // @synthesize audioQueueInitTimestamp=_audioQueueInitTimestamp;
@property unsigned long long audioQueueNewTimestamp; // @synthesize audioQueueNewTimestamp=_audioQueueNewTimestamp;
@property unsigned long long prepareQueueTimestamp; // @synthesize prepareQueueTimestamp=_prepareQueueTimestamp;
@property unsigned long long recordStartTimestamp; // @synthesize recordStartTimestamp=_recordStartTimestamp;
@property unsigned long long requestRecordPermissionCallbackTimestamp; // @synthesize requestRecordPermissionCallbackTimestamp=_requestRecordPermissionCallbackTimestamp;
@property unsigned long long touchBeginTimestamp; // @synthesize touchBeginTimestamp=_touchBeginTimestamp;
@property(nonatomic) _Bool isInputPortReseted; // @synthesize isInputPortReseted=_isInputPortReseted;
@property _Bool isSetInputPortWithBuiltInMic; // @synthesize isSetInputPortWithBuiltInMic=_isSetInputPortWithBuiltInMic;
@property unsigned int receiveDataLength; // @synthesize receiveDataLength=_receiveDataLength;
@property _Bool receiveEndFlag; // @synthesize receiveEndFlag=_receiveEndFlag;
@property unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property unsigned int inputId; // @synthesize inputId=_inputId;
@property unsigned int duration; // @synthesize duration=_duration;
@property unsigned int audioid; // @synthesize audioid=_audioid;
@property unsigned int createtime; // @synthesize createtime=_createtime;
@property long long voiceFormat; // @synthesize voiceFormat=_voiceFormat;
@property(copy) NSString *msgSource; // @synthesize msgSource=_msgSource;
@property(retain) NSString *chatname; // @synthesize chatname=_chatname;
@property(retain) NSString *tousr; // @synthesize tousr=_tousr;
@property(retain) NSString *fromusr; // @synthesize fromusr=_fromusr;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

