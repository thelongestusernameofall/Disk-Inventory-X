//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSButtonCell, NSImage;

@interface NTAquaImager : NSObject
{
    NSImage *_normalImage;
    NSImage *_aquaImage;
    NSImage *_graphiteImage;
    NSButtonCell *_buttonCell;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)drawBackground:(struct _NSRect)arg1 highlighted:(BOOL)arg2;

@end
