//
//  NSObject+XZKVO.h
//  XZCustomKVO
//
//  Created by Alan on 4/29/20.
//  Copyright © 2020 zhaixingzhi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (XZKVO)
- (void)xz_addObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath options:(NSKeyValueObservingOptions)options context:(nullable void *)context;
//监听观察者
- (void)xz_observeValueForKeyPath:(nullable NSString *)keyPath ofObject:(nullable id)object change:(nullable NSDictionary<NSKeyValueChangeKey, id> *)change context:(nullable void *)context;

- (void)xz_removeObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath;
@end

NS_ASSUME_NONNULL_END
