/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import "MSOAttachmentOperations.h"
#import  <office365_exchange_helpers/MSOBaseODataContainerHelper.h>
#import  <office365_odata_interfaces/MSOOdataUrl.h>

/**
* The implementation file for type MSOAttachmentOperations.
*/

@implementation MSOAttachmentOperations

-(id)initWith:(NSString *)urlComponent :(id<MSOODataExecutable>)parent{
    return [super initOperationWithUrl:urlComponent Parent:parent];
}


@end