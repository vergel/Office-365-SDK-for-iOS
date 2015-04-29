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

@class MSGraphAppRoleAssignmentFetcher;
@class MSGraphAppRoleAssignmentCollectionFetcher;
@class MSGraphOAuth2PermissionGrantFetcher;
@class MSGraphOAuth2PermissionGrantCollectionFetcher;
@class MSGraphDirectoryObjectFetcher;
@class MSGraphDirectoryObjectCollectionFetcher;
@class MSGraphMessageFetcher;
@class MSGraphMessageCollectionFetcher;
@class MSGraphCalendarFetcher;
@class MSGraphCalendarCollectionFetcher;
@class MSGraphCalendarGroupFetcher;
@class MSGraphCalendarGroupCollectionFetcher;
@class MSGraphEventFetcher;
@class MSGraphEventCollectionFetcher;
@class MSGraphPhotoFetcher;
@class MSGraphPhotoCollectionFetcher;
@class MSGraphDriveFetcher;
@class MSGraphItemFetcher;
@class MSGraphItemCollectionFetcher;
@class MSGraphUserOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphUserFetcher.
*/

@protocol MSGraphUserFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphUser *user, MSODataException *exception))callback;
- (id<MSGraphUserFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphUserFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphUserFetcher>)select:(NSString *)params;
- (id<MSGraphUserFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphUserOperations *operations;

- (MSGraphAppRoleAssignmentCollectionFetcher *)getappRoleAssignments;
- (MSGraphAppRoleAssignmentFetcher *) getappRoleAssignmentsById:(NSString*)_id;
- (MSGraphOAuth2PermissionGrantCollectionFetcher *)getoauth2PermissionGrants;
- (MSGraphOAuth2PermissionGrantFetcher *) getoauth2PermissionGrantsById:(NSString*)_id;
- (MSGraphDirectoryObjectCollectionFetcher *)getownedDevices;
- (MSGraphDirectoryObjectFetcher *) getownedDevicesById:(NSString*)_id;
- (MSGraphDirectoryObjectCollectionFetcher *)getregisteredDevices;
- (MSGraphDirectoryObjectFetcher *) getregisteredDevicesById:(NSString*)_id;
- (MSGraphDirectoryObjectFetcher *)getmanager;
- (MSGraphDirectoryObjectCollectionFetcher *)getdirectReports;
- (MSGraphDirectoryObjectFetcher *) getdirectReportsById:(NSString*)_id;
- (MSGraphDirectoryObjectCollectionFetcher *)getmemberOf;
- (MSGraphDirectoryObjectFetcher *) getmemberOfById:(NSString*)_id;
- (MSGraphDirectoryObjectCollectionFetcher *)getcreatedObjects;
- (MSGraphDirectoryObjectFetcher *) getcreatedObjectsById:(NSString*)_id;
- (MSGraphDirectoryObjectCollectionFetcher *)getownedObjects;
- (MSGraphDirectoryObjectFetcher *) getownedObjectsById:(NSString*)_id;
- (MSGraphMessageCollectionFetcher *)getMessages;
- (MSGraphMessageFetcher *) getMessagesById:(NSString*)_id;
- (MSGraphCalendarCollectionFetcher *)getCalendars;
- (MSGraphCalendarFetcher *) getCalendarsById:(NSString*)_id;
- (MSGraphCalendarFetcher *)getCalendar;
- (MSGraphCalendarGroupCollectionFetcher *)getCalendarGroups;
- (MSGraphCalendarGroupFetcher *) getCalendarGroupsById:(NSString*)_id;
- (MSGraphEventCollectionFetcher *)getEvents;
- (MSGraphEventFetcher *) getEventsById:(NSString*)_id;
- (MSGraphEventCollectionFetcher *)getCalendarView;
- (MSGraphEventFetcher *) getCalendarViewById:(NSString*)_id;
- (MSGraphPhotoFetcher *)getUserPhoto;
- (MSGraphPhotoCollectionFetcher *)getUserPhotos;
- (MSGraphPhotoFetcher *) getUserPhotosById:(NSString*)_id;
- (MSGraphDriveFetcher *)getdrive;
- (MSGraphItemCollectionFetcher *)getfiles;
- (MSGraphItemFetcher *) getfilesById:(NSString*)_id;

@end

@interface MSGraphUserFetcher : MSODataEntityFetcher<MSGraphUserFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateUser:(MSGraphUser *)user callback:(void (^)(MSGraphUser *user, MSODataException *error))callback;
- (NSURLSessionTask *) deleteUser:(void (^)(int status, MSODataException *exception))callback;

@end