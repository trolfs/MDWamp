//
//  MDWampError.h
//  MDWamp
//
//  Created by Niko Usai on 08/03/14.
//  Copyright (c) 2014 mogui.it. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "MDWampMessage.h"

extern NSString * const MDWampErrorDomain   ;

@interface MDWampError : NSObject<MDWampMessage>
@property (nonatomic, strong) NSNumber *type;
@property (nonatomic, strong) NSNumber *request;
@property (nonatomic, strong) NSString *callID;     // Used in version 1
@property (nonatomic, strong) NSDictionary *details;
@property (nonatomic, strong) NSString *error;
@property (nonatomic, strong) NSString *errorDesc;  // Used in vesion 1
@property (nonatomic, strong) NSArray *arguments;
@property (nonatomic, strong) NSDictionary *argumentsKw;
- (NSError *) makeError;
@end
