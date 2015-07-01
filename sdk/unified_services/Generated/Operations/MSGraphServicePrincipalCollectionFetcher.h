/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSGraphServicePrincipalFetcher;
@class MSGraphServicePrincipalCollectionFetcher;

#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphServicePrincipalCollectionFetcher.
*/

@protocol MSGraphServicePrincipalCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSGraphServicePrincipal> *servicePrincipals, MSOrcError *error))callback;

- (MSGraphServicePrincipalCollectionFetcher *)select:(NSString *)params;
- (MSGraphServicePrincipalCollectionFetcher *)filter:(NSString *)params;
- (MSGraphServicePrincipalCollectionFetcher *)search:(NSString *)params;
- (MSGraphServicePrincipalCollectionFetcher *)top:(int)value;
- (MSGraphServicePrincipalCollectionFetcher *)skip:(int)value;
- (MSGraphServicePrincipalCollectionFetcher *)expand:(NSString *)value;
- (MSGraphServicePrincipalCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphServicePrincipalCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServicePrincipalCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSGraphServicePrincipalFetcher *)getById:(NSString *)Id;
- (void)add:(MSGraphServicePrincipal *)entity callback:(void (^)(MSGraphServicePrincipal *servicePrincipal, MSOrcError *error))callback;

@end

@interface MSGraphServicePrincipalCollectionFetcher : MSOrcCollectionFetcher<MSGraphServicePrincipalCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end