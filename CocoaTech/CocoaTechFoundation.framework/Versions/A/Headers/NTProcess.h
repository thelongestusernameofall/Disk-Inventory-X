//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NTFileDesc;

@interface NTProcess : NSObject <NSCoding>
{
    BOOL _isValid;
    NSDictionary *_dictionary;
    NTFileDesc *_desc;
    struct ProcessSerialNumber _psn;
}

+ (id)processWithPSN:(struct ProcessSerialNumber *)arg1;
- (id)initWithPSN:(struct ProcessSerialNumber *)arg1;
- (void)dealloc;
- (BOOL)isValid;
- (BOOL)isBackgroundOnly;
- (BOOL)isBackgroundOnlyWithUI;
- (id)desc;
- (id)processName;
- (struct ProcessSerialNumber *)psn;
- (id)processID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCurrent;
- (BOOL)isEqualToFront;
- (BOOL)isStillRunning;
- (void)show;
- (void)hide;
- (void)makeFront:(BOOL)arg1;
- (void)quit;
- (void)kill;
- (id)description;
- (int)compareByProcessName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
