/*
 File: UBKContainerDragButton.h
 Project: UBKAccessibilityKit
 Version: 1.0
 
 Copyright 2019 UBank - a division of National Australia Bank Limited
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <UIKit/UIKit.h>

@protocol UBKContainerDragButtonDelegate;

//Button on the inspector container. Dragging this button will move the inspector view to increase or decrease the height.
@interface UBKContainerDragButton : UIView
@property (nonatomic) id <UBKContainerDragButtonDelegate> delegate;
@end

@protocol UBKContainerDragButtonDelegate <NSObject>
- (void)moveContainerUp;
- (void)moveContainerDown;
@end
