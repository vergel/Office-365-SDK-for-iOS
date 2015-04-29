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

#import "MSGraphODataEntities.h"

@implementation MSGraphDeviceFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSGraphDevice class]]) {

		_operations = [[MSGraphDeviceOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateDevice:(id)entity callback:(void (^)(MSGraphDevice *device, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteDevice:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSGraphDirectoryObjectCollectionFetcher *)getregisteredOwners {

    return [[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"registeredOwners" parent:self asClass:[MSGraphDirectoryObject class]];
}

- (id<MSGraphDirectoryObjectFetcher>)getregisteredOwnersById:(NSString *)_id {

    return [[[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"registeredOwners" parent:self asClass:[MSGraphDirectoryObject class]] getById:_id];
}

- (MSGraphDirectoryObjectCollectionFetcher *)getregisteredUsers {

    return [[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"registeredUsers" parent:self asClass:[MSGraphDirectoryObject class]];
}

- (id<MSGraphDirectoryObjectFetcher>)getregisteredUsersById:(NSString *)_id {

    return [[[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"registeredUsers" parent:self asClass:[MSGraphDirectoryObject class]] getById:_id];
}

@end