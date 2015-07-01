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

@class MSDirectoryAppRoleAssignmentFetcher;
@class MSDirectoryAppRoleAssignmentCollectionFetcher;
@class MSDirectoryOAuth2PermissionGrantFetcher;
@class MSDirectoryOAuth2PermissionGrantCollectionFetcher;
@class MSDirectoryServicePrincipalOperations;
@class MSDirectoryServicePrincipalFetcher;

#import <core/core.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryServicePrincipalFetcher.
*/

@protocol MSDirectoryServicePrincipalFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSDirectoryServicePrincipal *servicePrincipal, MSOrcError *error))callback;
- (MSDirectoryServicePrincipalFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryServicePrincipalFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSDirectoryServicePrincipalFetcher *)select:(NSString *)params;
- (MSDirectoryServicePrincipalFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryServicePrincipalOperations *operations;

@end

@interface MSDirectoryServicePrincipalFetcher : MSOrcEntityFetcher<MSDirectoryServicePrincipalFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSDirectoryServicePrincipal *)servicePrincipal callback:(void(^)(MSDirectoryServicePrincipal *servicePrincipal, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;

@property (retain, nonatomic, readonly, getter=appRoleAssignedTo) MSDirectoryAppRoleAssignmentCollectionFetcher *appRoleAssignedTo;

- (MSDirectoryAppRoleAssignmentFetcher *)getAppRoleAssignedToById:(NSString*)id;

@property (retain, nonatomic, readonly, getter=appRoleAssignments) MSDirectoryAppRoleAssignmentCollectionFetcher *appRoleAssignments;

- (MSDirectoryAppRoleAssignmentFetcher *)getAppRoleAssignmentsById:(NSString*)id;

@property (retain, nonatomic, readonly, getter=oauth2PermissionGrants) MSDirectoryOAuth2PermissionGrantCollectionFetcher *oauth2PermissionGrants;

- (MSDirectoryOAuth2PermissionGrantFetcher *)getOauth2PermissionGrantsById:(NSString*)id;


@end