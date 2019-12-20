/*
 File: UBKAccessibilitySuggestionViewController.h
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

NS_ASSUME_NONNULL_BEGIN

@class UBKAccessibilityProperty;

@protocol UBKAccessibilitySuggestionViewControllerDelegate;

//Shows text suggestion for the currently selected warning. Tapping the action button on this view will pop the view controller and navigate to that section.
@interface UBKAccessibilitySuggestionViewController : UIViewController
@property (nonatomic) UBKAccessibilityProperty *accessibilityProperty;
@property (nonatomic, weak) id <UBKAccessibilitySuggestionViewControllerDelegate> delegate;
@property (nonatomic) NSInteger sectionIndex;
@end

@protocol UBKAccessibilitySuggestionViewControllerDelegate <NSObject>

- (void)showSectionWithWarning:(UBKAccessibilityProperty *)accessibilityProperty;

@end

NS_ASSUME_NONNULL_END
