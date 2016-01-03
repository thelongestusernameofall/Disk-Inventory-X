// Copyright 1997-2005, 2008 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Header: svn+ssh://source.omnigroup.com/Source/svn/Omni/tags/OmniSourceRelease/2008-09-09/OmniGroup/Frameworks/OmniFoundation/Scheduling.subproj/OFScheduledEvent.h 104581 2008-09-06 21:18:23Z kc $

#import <OmniFoundation/OFObject.h>

@class NSDate;
@class OFInvocation;

@interface OFScheduledEvent : OFObject
{
    OFInvocation *invocation;
    NSDate *date;
    BOOL fireOnTermination;
}

- initWithInvocation:(OFInvocation *)anInvocation atDate:(NSDate *)aDate;
- initWithInvocation:(OFInvocation *)anInvocation atDate:(NSDate *)aDate fireOnTermination:(BOOL)shouldFireOnTermination;
- initForObject:(id)anObject selector:(SEL)aSelector withObject:(id)aWithObject atDate:(NSDate *)date;

- (OFInvocation *)invocation;
- (NSDate *)date;
- (BOOL)fireOnTermination;

- (void)invoke;

- (NSComparisonResult)compare:(OFScheduledEvent *)otherEvent;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)anObject;

@end