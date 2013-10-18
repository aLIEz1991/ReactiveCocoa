//
//  RACMulticastConnection.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 4/11/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import "RACDeprecated.h"

@class RACSignal;
@class RACDisposable;

RACDeprecated("Send events to a shared RACSubject instead")
@interface RACMulticastConnection : NSObject

@property (nonatomic, strong, readonly) RACSignal *signal;

- (RACDisposable *)connect;
- (RACSignal *)autoconnect;

@end
