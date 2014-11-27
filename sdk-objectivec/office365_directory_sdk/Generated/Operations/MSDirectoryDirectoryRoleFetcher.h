/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 *
 * Warning: This code was generated automatically. Edits will be overwritten.
 * To make changes to this code, please make changes to the generation framework itself:
 * https://github.com/MSOpenTech/odata-codegen
 *******************************************************************************/

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryDirectoryRoleOperations.h"
#import "MSDirectoryDirectoryRole.h"


/**
* The header for type MSDirectoryDirectoryRoleFetcher.
*/

@protocol MSDirectoryDirectoryRoleFetcher

@optional
-(NSURLSessionDataTask *)read:(void (^)(MSDirectoryDirectoryRole* directoryRole, NSError *error))callback;
-(NSURLSessionDataTask*) updateDirectoryRole:(id)entity withCallback:(void (^)(MSDirectoryDirectoryRole*, NSError * error))callback;
-(NSURLSessionDataTask*) deleteDirectoryRole:(void (^)(int status, NSError * error))callback;

@end

@interface MSDirectoryDirectoryRoleFetcher : MSODataEntityFetcher<MSDirectoryDirectoryRoleFetcher>

-(MSDirectoryDirectoryRoleOperations*) getOperations;

	
@end