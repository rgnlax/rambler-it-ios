// Copyright (c) 2015 RAMBLER&Co
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

@class TagObjectDescriptor;

/**
 @author Golovko Mikhail
 
 Класс конфигурации модуля отображения тегов.
 */
@interface TagModuleConfig : NSObject

/**
 @author Golovko Mikhail

 Конфигурация объекта, с которым будет работать модуль тегов.
 */
@property (nonatomic, strong) TagObjectDescriptor *objectDescriptor;

/**
 @author Golovko Mikhail

 Конфигурация объекта, теги которого не нужно отображать в выборке.
 */
@property (nonatomic, strong) TagObjectDescriptor *filteredObjectDescriptor;

/**
 @author Golovko Mikhail
 
 Режим отображения
 YES - вертикальный
 NO - горизонтальный
 */
@property (assign, nonatomic) BOOL verticalAlign;

/**
 @author Golovko Mikhail
 
 Флаг отображения кнопки добавления тегов
 */
@property (assign, nonatomic) BOOL enableAddButton;

/**
 @author Golovko Mikhail
 
 Флаг отображения кнопки удаления тега
 */
@property (assign, nonatomic) BOOL enableRemoveButton;

/**
 @author Golovko Mikhail
 
 Количество строк, которые отображаются в свернутом режиме.
 TagModuleDisableCollapseTags - не будет сворачиваться.
 */
@property (assign, nonatomic) NSInteger numberOfShowLine;

- (instancetype)initWithObjectDescriptor:(TagObjectDescriptor *)objectDescriptor;

- (instancetype)initWithObjectDescriptor:(TagObjectDescriptor *)objectDescriptor
                filteredObjectDescriptor:(TagObjectDescriptor *)filteredObjectDescriptor;


@end