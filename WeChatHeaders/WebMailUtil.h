//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WebMailUtil : MMObject
{
}

+ (id)ConvertMailNode2HTMLContent:(id)arg1;
+ (id)ConvertMailNode2NativeHTMLContent:(id)arg1 imageIndex:(unsigned long long *)arg2 imageAttachmentList:(id)arg3;
+ (id)SystemConvertMailNode2HTMLContent:(id)arg1 withImgIndex:(int)arg2;
+ (id)MailcompressImage:(id)arg1;
+ (id)SystemConvertMailNodeList2HTMLContent:(id)arg1;
+ (id)ConvertMailNodeList2NativeHTMLContent:(id)arg1 imageAttachmentList:(id)arg2;

@end

