#pragma once

#include "RedBlackTree.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Collections::Generic;
using namespace msclr::interop;

public ref class RedBlackTreeWrapper
{
private:
    RedBlackTree* rbt;

public:
    RedBlackTreeWrapper()
    {
        rbt = new RedBlackTree();
    }

    ~RedBlackTreeWrapper()
    {
        delete rbt;
    }

    void Insert(String^ data)
    {
        rbt->insertText(marshal_as<std::string>(data));
    }

    bool Search(String^ data)
    {
        std::string nativeData = marshal_as<std::string>(data);
        return rbt->search(nativeData);
    }

    void Display()
    {
        rbt->display();
    }

    int PrintCertainWordFreq(String^ word)
    {
        std::string nativeWord = msclr::interop::marshal_as<std::string>(word);
        return rbt->printCertainWordFreq(nativeWord);
    }



    int GetTotalFrequency()
    {
        return rbt->getTotalFrequency();
    }

    String^ InorderTraversal()
    {
        std::string result;
        rbt->generateInorderString(rbt->getRoot(), result);
        return gcnew String(result.c_str());
    }

    bool empty()  {
        return rbt->empty();
    }


    String^ findAndPrintMostCommonWords() {
        std::string result;
        result = rbt->findMostCommonWords();
        return gcnew String(result.c_str());
    }
};
