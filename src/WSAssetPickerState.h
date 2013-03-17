//
//  WSAssetPickerState.h
//  WSAssetPickerController
//
//  Created by Wesley Smith on 5/24/12.
//  Copyright (c) 2012 Wesley D. Smith. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <Foundation/Foundation.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface WSAssetPickerState : NSObject

@property (nonatomic, strong) void (^pickerDidCompleteBlock)(NSDictionary *info);
@property (nonatomic, strong) void (^pickerDidCancelBlock)(void);
@property (nonatomic, strong) void (^pickerDidFailBlock)(NSError *error);

@property (nonatomic, strong) ALAssetsLibrary *assetsLibrary;
@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic, readwrite) NSUInteger selectedCount;
@property (nonatomic, readwrite) NSInteger selectionLimit;

- (void)clearSelectedAssets;

- (void)sessionCanceled;
- (void)sessionCompleted;
- (void)sessionFailed:(NSError *)error;

- (void)changeSelectionState:(BOOL)selected forAsset:(ALAsset *)asset;

@end
