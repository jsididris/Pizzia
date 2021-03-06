/*
** EPITECH PROJECT, 2019
** CPP_zia_github
** File description:
** IMapContainer
*/

#include <string>

#pragma once

namespace Pizzia {

class IMapContainer {
	public:
		IMapContainer() = default;
		virtual ~IMapContainer() = default;
        IMapContainer &operator=(const IMapContainer &) = delete;

    public:
        virtual bool create(const std::string &key, const std::string &value) = 0;
        virtual bool create(const std::string &key, int value) = 0;
        virtual bool create(const std::string &key, bool value) = 0;
        virtual bool create(const std::string &key, float value) = 0;

        virtual void put(const std::string &key, const std::string &value) = 0;
        virtual void put(const std::string &key, int value) = 0;
        virtual void put(const std::string &key, bool value) = 0;
        virtual void put(const std::string &key, float value) = 0;

        virtual std::string getString(const std::string &key) const = 0;
        virtual int getInt(const std::string &key) const = 0;
        virtual bool getBool(const std::string &key) const = 0;
        virtual float getFloat(const std::string &key) const = 0;

        virtual void del(const std::string &key) = 0;
        virtual bool has(const std::string &key) const = 0;

        virtual std::unordered_map<std::string, std::string>::const_iterator begin() const = 0;
        virtual std::unordered_map<std::string, std::string>::const_iterator end() const = 0;
};

}